//
//  ResponseAgreementChangeTips.h
//  CarBaDa
//
//  Created by lkk42286 on 2018/11/30.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseAgreementChangeTips : TCTResponseObject

@property (nonatomic,copy) NSString *tipsId;//主键

@property (nonatomic,copy) NSString *title;//标题

@property (nonatomic,strong) NSString *tips;//内容


@end

NS_ASSUME_NONNULL_END
