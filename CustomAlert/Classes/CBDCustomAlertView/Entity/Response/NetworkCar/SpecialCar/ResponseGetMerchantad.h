//
//  ResponseGetMerchantad.h
//  CarBaDa
//
//  Created by mini on 2019/3/6.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetMerchantad : NSObject
@property (nonatomic, strong) NSMutableArray *adList;
@end


@interface adList : NSObject

@property (nonatomic, strong) NSString *adDescription;
@property (nonatomic, strong) NSString *imgUrl;
@property (nonatomic, strong) NSString *iphoneUrl;
@property (nonatomic, strong) NSString *linkUrl;
@property (nonatomic, strong) NSString *mainTitle;
@property (nonatomic, strong) NSString *subTitle;
@property (nonatomic, strong) NSString *backgroundColor;
@end
