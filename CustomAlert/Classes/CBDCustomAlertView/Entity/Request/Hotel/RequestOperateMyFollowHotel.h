//
//  RequestOperateMyFollowHotel.h
//  CarBaDa
//
//  Created by Vic_Li on 2017/8/25.
//  Copyright © 2017年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestOperateMyFollowHotel : TCTRequestObject
@property (nonatomic, copy) NSString *memberId;
@property (nonatomic, copy) NSString *hotelId;
@property (nonatomic, copy) NSString *type;//关注的酒店类型（1、收藏，2、看过的）
@property (nonatomic, copy) NSString *operation;//操作类型（1、添加，2、删除，3清空）
@end
