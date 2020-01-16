//
//  RequestGetFeeAppeal.h
//  CarBaDa
//
//  Created by mini on 2018/11/30.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestGetFeeAppeal : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *appealSource; //2 取消申诉；3 服务完成申诉


@end
