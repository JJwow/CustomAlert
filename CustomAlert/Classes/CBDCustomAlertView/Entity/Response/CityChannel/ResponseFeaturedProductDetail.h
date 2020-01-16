//
//  ResponseFeaturedProductDetail.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseFeaturedProductDetail : NSObject

@property (nonatomic,strong) NSString *details;//详情介绍
@property (nonatomic,strong) NSMutableArray *picPath;//图片地址
@property (nonatomic,strong) NSString *subTitle;//特色产品描述
@property (nonatomic,strong) NSString *title;//特色产品名称

@end
