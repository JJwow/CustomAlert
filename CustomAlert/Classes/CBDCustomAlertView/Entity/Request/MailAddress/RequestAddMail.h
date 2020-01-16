//
//  RequestAddMail.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/23.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "RequestAddMail.h"

@interface RequestAddMail : TCTRequestObject
@property (nonatomic, copy)NSString *address;
@property (nonatomic, copy)NSString *addressee;
@property (nonatomic, copy)NSString *localArea;
@property (nonatomic, copy)NSString *memberId;
@property (nonatomic, copy)NSString *mobile;
@property (nonatomic, copy)NSString *province;
@property (nonatomic, copy)NSString *city;
@property (nonatomic, copy)NSString *district;

@end
