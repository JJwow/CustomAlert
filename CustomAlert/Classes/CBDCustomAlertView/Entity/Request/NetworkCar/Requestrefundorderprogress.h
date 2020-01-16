//
//  Requestrefundorderprogress.h
//  CarBaDa
//
//  Created by mini on 2018/7/18.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

//退单进度
@interface Requestrefundorderprogress : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;//会员id
@property (nonatomic, copy) NSString *orderId;//订单id
@property (nonatomic, copy) NSString *orderSerialId;//订单流水

@end
