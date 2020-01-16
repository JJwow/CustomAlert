//
//  RequestGetCityList.h
//  CarBaDa
//
//  Created by LZQ on 15/12/31.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"
/**
 *  "body":
	{
 "queryType":"1",
 "startName":"南京"
	},
 */
@interface RequestGetCityList : TCTRequestObject

@property(nonatomic, copy)NSString *queryType;//查询类型  0出发 1到达
@property(nonatomic, copy)NSString *startName;//出发城市 1到达城市时必传

@end

