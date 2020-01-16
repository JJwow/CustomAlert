//
//  RequestSendCombinatePackageByPhone.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/22.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestSendCombinatePackage : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *batchCodes;
@property (nonatomic, copy) NSString *ifRegister;
@property (nonatomic, copy) NSString *whetherDicTrans;
@end
