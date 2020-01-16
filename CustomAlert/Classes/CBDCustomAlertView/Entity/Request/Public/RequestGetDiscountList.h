//
//  RequestGetDiscountList.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/23.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetDiscountList : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *projectType;
@end
