//
//  RequestGetMailFee.h
//  CarBaDa
//
//  Created by zjb on 2017/5/4.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetMailFee : TCTRequestObject
@property (nonatomic,copy) NSString *projectType;
@property (nonatomic,copy) NSString *province;
@end
