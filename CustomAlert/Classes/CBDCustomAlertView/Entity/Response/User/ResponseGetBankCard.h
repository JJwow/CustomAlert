//
//  ResponseGetBankCard.h
//  CarBaDa
//
//  Created by admin on 15/10/16.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResponseGetBankCard : NSObject

@property (nonatomic, strong) NSArray *bankCardList;

@end

@interface bankCardList : NSObject

@property (nonatomic,strong) NSString *cardNo;
@property (nonatomic,strong) NSString *bankName;
@property (nonatomic,strong) NSString *thumbnailUrl;
@property (nonatomic,strong) NSString *agreeNo;
@property (nonatomic,strong) NSString *payType;

@end
