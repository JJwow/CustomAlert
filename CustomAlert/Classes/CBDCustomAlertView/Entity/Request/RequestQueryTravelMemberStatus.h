//
//  RequestQueryTravelMemberStatus.h
//  CarBaDa
//
//  Created by 丁健 on 2019/12/10.
//  Copyright © 2019 wyj. All rights reserved.
//

#import "TCTRequestObject.h"


@interface RequestQueryTravelMemberStatus : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;//
@property (nonatomic, copy) NSString *accountNo;//12306账户
@end

