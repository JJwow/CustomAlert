//
//  RequestDeleteMail.h
//  CarBaDa
//
//  Created by Vic_Li on 16/3/23.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestDeleteMail : TCTRequestObject
@property (nonatomic, strong)NSString *mailId;
@property (nonatomic, strong)NSString *memberId;
@end
