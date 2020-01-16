//
//  RequestClauseCard.h
//  CarBaDa
//
//  Created by admin on 15/10/20.
//  Copyright (c) 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestClauseCard : TCTRequestObject

@property (nonatomic,strong) NSString *MemberId;
@property (nonatomic,strong) NSString *agreeNo;
@property (nonatomic,strong) NSString *payType;

@end
