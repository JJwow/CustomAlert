//
//  ResponseFeaturedProductList.h
//  CarBaDa
//
//  Created by admin on 16/6/30.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseFeaturedProductList : NSObject

@property (nonatomic,strong) NSMutableArray *productList;//特色产品列表

@end

@interface productList : NSObject

@property (nonatomic,strong) NSString *featuredId;//特色产品id
@property (nonatomic,strong) NSString *picPath;//图片地址
@property (nonatomic,strong) NSString *subTitle;//特色产品描述
@property (nonatomic,strong) NSString *title;//	特色产品名称

@end