//
//  RequestSubmitAppeal.h
//  CarBaDa
//
//  Created by mini on 2018/12/3.
//  Copyright © 2018 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

@interface RequestSubmitAppeal : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *orderSerialId;
@property (nonatomic, strong) NSString *appealContent;
@property (nonatomic, strong) NSString *appealSource;
@property (nonatomic, strong) NSString *detailDesc;


@end
