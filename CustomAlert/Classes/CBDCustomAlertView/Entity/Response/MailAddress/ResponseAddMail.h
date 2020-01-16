//
//  ResponseAddMail.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/23.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface mail : NSObject
@property (nonatomic, strong)NSString *address;//详细地址
@property (nonatomic, strong)NSString *addressee;//收件人
@property (nonatomic, strong)NSString *localArea;//所在地区
@property (nonatomic, strong)NSString *mailId;//邮寄Id
@property (nonatomic, strong)NSString *mobile;//手机号
@property (nonatomic, strong)NSString *province;
@property (nonatomic, strong)NSString *city;
@property (nonatomic, strong)NSString *district;

@end

@interface ResponseAddMail : NSObject
@property (nonatomic, strong)mail *mail;
@end


