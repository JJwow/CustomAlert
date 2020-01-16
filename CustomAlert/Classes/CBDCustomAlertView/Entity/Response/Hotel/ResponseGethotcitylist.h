//
//  ResponseGethotcitylist.h
//  CarBaDa
//
//  Created by likaikun on 2017/4/27.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "ResponseGetBusDepartures.h"

@interface ResponseGethotcitylist : TCTResponseObject

@property (nonatomic, strong)NSArray *hotCityList;
@property (nonatomic, copy) NSString *isSuccess;

@end

//
//@interface hotCityList : NSObject
//
//@property (nonatomic, copy) NSString *cityId;	//	城市ID
//@property (nonatomic, copy) NSString *cityName; //	城市名称
//@property (nonatomic, copy) NSString *enName;	//	城市拼音
//
//@end
