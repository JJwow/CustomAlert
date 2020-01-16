//
//  ResponseGetMemberVipCard.h
//  CarBaDa
//
//  Created by lkk42286 on 2019/1/3.
//  Copyright © 2019年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface ResponseGetMemberVipCard : TCTResponseObject

@property (nonatomic, strong) NSString *cardId;//卡片id
@property (nonatomic, strong) NSString *cardName;//卡片名称

@end

NS_ASSUME_NONNULL_END
