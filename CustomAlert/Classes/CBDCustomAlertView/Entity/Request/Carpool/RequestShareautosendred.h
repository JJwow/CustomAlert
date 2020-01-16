//
//  RequestShareautosendred.h
//  CarBaDa
//
//  Created by fly on 2018/11/8.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestShareautosendred : TCTRequestObject

@property (nonatomic, copy) NSString *batchCodes;//红包批次（多个）

@property (nonatomic, copy) NSString *memberId;

@property (nonatomic, copy) NSString *orderSerialId;

@property (nonatomic, copy) NSString *projectType;

@end
