//
//  CustomAlertBaseViewT.m
//  CarBaDa
//
//  Created by 王俊杰 on 2018/12/18.
//  Copyright © 2018 wyj. All rights reserved.
//

#import "CustomAlertBaseViewT.h"
#import "UIView+extension.h"
#import "Masonry.h"
@interface CustomAlertBaseViewT ()


@end

@implementation CustomAlertBaseViewT

#pragma mark - 配置baseView
- (void)configBaseViewWithParentView:(UIView *)parentView
              bCloseOnTouchUpOutside:(BOOL)bCloseOnTouchUpOutside
                          closeBlock:(nullable CloseOnTouchUpOutsideBlock)closeBlock{
    self.parentView = parentView;
    self.bCloseOnTouchUpOutside = bCloseOnTouchUpOutside;
    self.closeOnTouchUpOutsideBlock = closeBlock;
}

#pragma mark - 展示弹窗
- (void)show
{
    self.bIsShowing = YES;
    
    self.layer.opacity = 0.5f;
    self.layer.transform = CATransform3DMakeScale(1.3f, 1.3f, 1.0);
    [UIView animateWithDuration:0.2f delay:0.0 options:UIViewAnimationOptionCurveEaseInOut
                     animations:^{
                         self.vBack.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0.7f];
                         self.layer.opacity = 1.0f;
                         self.layer.transform = CATransform3DMakeScale(1, 1, 1);
                     }
                     completion:NULL
     ];
}

#pragma mark - 关闭弹窗
- (void)close
{
    self.bIsShowing = NO;
    CATransform3D currentTransform = self.layer.transform;
    self.layer.opacity = 1.0f;
    [UIView animateWithDuration:0.2f delay:0.0 options:UIViewAnimationOptionTransitionNone
                     animations:^{
                         self.vBack.backgroundColor = [UIColor colorWithRed:0.0f green:0.0f blue:0.0f alpha:0.0f];
                         self.layer.transform = CATransform3DConcat(currentTransform, CATransform3DMakeScale(0.6f, 0.6f, 1.0));
                         self.layer.opacity = 0.0f;
                     }
                     completion:^(BOOL finished) {
                         [self.vBack removeFromSuperview];
                         if (self.closeFinishBlock) {
                             self.closeFinishBlock();
                         }
                     }
     ];
}

- (float)getHeight{
    return self.frame.size.height;
}

- (float)getWidth{
    return self.frame.size.width;
}

#pragma mark - 背景隐藏
- (void)hideAction{
    if (!_bCloseOnTouchUpOutside) {
        return;
    }
    [self close];
    if (self.closeOnTouchUpOutsideBlock) {
        self.closeOnTouchUpOutsideBlock();
    }
}
-(void)dealloc{
    NSLog(@"");
}
#pragma mark - getter and setter
//-(UIView *)vBack{
//    if (!_vBack) {
//        _vBack = [[UIView alloc]initWithFrame:CGRectMake(0, 0, self.parentView.width, self.parentView.height)];
//        UIButton *btn = [[UIButton alloc]initWithFrame:_vBack.frame];
//        [btn addTarget:self action:@selector(hideAction) forControlEvents:UIControlEventTouchUpInside];
//        [_vBack addSubview:btn];
//        _vBack.backgroundColor = [UIColor colorWithRed:0 green:0 blue:0 alpha:0];
//        [_vBack addSubview:self];
//        [self mas_makeConstraints:^(MASConstraintMaker *make) {
//            make.centerX.equalTo(_vBack);
//            make.centerY.equalTo(_vBack);
//            make.height.mas_equalTo([self getHeight]);
//            make.width.mas_equalTo([self getWidth]);
//        }];
//    }
//    return _vBack;
//}
-(void)setVBack:(UIView *)vBack{
    _vBack = vBack;
    [_vBack setFrame:CGRectMake(0, 0, self.parentView.width, self.parentView.height)];
    if (_parentView != NULL) {
        [_parentView addSubview:self.vBack];
        [_parentView bringSubviewToFront:self.vBack];
    }
    [_vBack addSubview:self];
    __weak __typeof(self)weakSelf = self;
    [self mas_makeConstraints:^(MASConstraintMaker *make) {
        __strong __typeof__(weakSelf) strongSelf = weakSelf;
        make.centerX.equalTo(strongSelf.vBack);
        make.centerY.equalTo(strongSelf.vBack);
        make.height.mas_equalTo([strongSelf getHeight]);
        make.width.mas_equalTo([strongSelf getWidth]);
    }];
}
@end
