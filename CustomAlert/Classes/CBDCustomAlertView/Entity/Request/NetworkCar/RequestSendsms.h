//
//  RequestSendsms.h
//  CarBaDa
//
//  Created by mini on 2018/10/29.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestSendsms : TCTRequestObject

@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *orderSerialId;
@property (nonatomic, copy) NSString *type; //0 紧急联系人；1 一键报警

@property (nonatomic, copy) NSString *lng;
@property (nonatomic, copy) NSString *lat;
@property (nonatomic, copy) NSString *address;

@end
