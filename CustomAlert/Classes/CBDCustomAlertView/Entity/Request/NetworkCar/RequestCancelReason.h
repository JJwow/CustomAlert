//
//  RequestCancelReason.h
//  CarBaDa
//
//  Created by mini on 2018/11/6.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestCancelReason :  TCTRequestObject


@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *selectedReason;
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *remark;
@property (nonatomic, copy) NSString *cancelType; //1 申诉；

@end
