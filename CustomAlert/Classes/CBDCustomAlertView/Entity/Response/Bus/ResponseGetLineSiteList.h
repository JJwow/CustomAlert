//
//  ResponseGetLineSiteList.h
//  CarBaDa
//
//  Created by 王俊杰 on 2019/7/12.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResponseGetHotSites.h"
NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetLineSiteList : NSObject

@property (nonatomic, copy) NSString *siteNum;//途径站点数量

@property (nonatomic, strong) NSArray *siteList;//站点列表(siteName 站点名称,siteType 0-其他，1-始发，2-终点，3-此站上车，4-此站下车

@end

NS_ASSUME_NONNULL_END

