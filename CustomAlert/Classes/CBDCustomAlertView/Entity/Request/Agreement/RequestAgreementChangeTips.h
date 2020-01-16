//
//  RequestAgreementChangeTips.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

typedef void(^ShowAgreementTipBlock)(id responseObject);

typedef void(^SkipAgreementTipBlock)(BOOL bBrowseType);


NS_ASSUME_NONNULL_BEGIN

@interface RequestAgreementChangeTips : TCTRequestObject

@property (nonatomic, strong) NSString *position;//协议位置编号

+(void)agreementChangeTipsShow:(ShowAgreementTipBlock)showBlock skipBlock:(SkipAgreementTipBlock)skipBlock;

@end

NS_ASSUME_NONNULL_END
