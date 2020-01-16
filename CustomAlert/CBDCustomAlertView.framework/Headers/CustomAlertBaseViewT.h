//
//  CustomAlertBaseViewT.h
//  CarBaDa
//
//  Created by 王俊杰 on 2018/12/18.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^CloseOnTouchUpOutsideBlock)();

typedef void(^CloseFinishBlock)();

@interface CustomAlertBaseViewT : UIView

@property (nonatomic, weak) UIView *vBack;//背景阴影

@property (nonatomic, assign) BOOL bCloseOnTouchUpOutside; //点击空白处是否隐藏弹窗

@property (nonatomic, copy) CloseOnTouchUpOutsideBlock closeOnTouchUpOutsideBlock; //点击空白处隐藏弹窗的回调

@property (nonatomic, copy) CloseFinishBlock closeFinishBlock; //弹窗消失后操作

@property (nonatomic, assign) BOOL bIsShowing; //弹窗是否已经出现在屏幕上

@property (nonatomic, weak) UIView *parentView; //弹窗显示的父view

- (void)show;

- (void)close;

- (float)getHeight;

- (float)getWidth;


/**
 配置baseView

 @param parentView              着陆view
 @param bCloseOnTouchUpOutside  点击阴影背景是否需要隐藏
 @param closeBlock              点击n背景隐藏block
 */
- (void)configBaseViewWithParentView:(UIView *)parentView
              bCloseOnTouchUpOutside:(BOOL)bCloseOnTouchUpOutside
                          closeBlock:(nullable CloseOnTouchUpOutsideBlock)closeBlock;

@end

NS_ASSUME_NONNULL_END
