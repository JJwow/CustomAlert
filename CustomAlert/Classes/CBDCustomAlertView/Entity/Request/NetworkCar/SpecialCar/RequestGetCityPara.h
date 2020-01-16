//
//  RequestGetCityPara.h
//  CarBaDa
//
//  Created by mini on 2018/9/6.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetCityPara : TCTRequestObject

//510版本去掉
//@property (nonatomic, strong) NSString *dptCityId;
//@property (nonatomic, strong) NSString *countyName;
//@property (nonatomic, strong) NSString *arrCityId;
//出发区域code
@property (nonatomic, strong) NSString *dptAdCode;


@end
