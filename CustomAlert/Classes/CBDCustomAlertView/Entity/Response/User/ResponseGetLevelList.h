//
//  ResponseGetLevelList.h
//  CarBaDa
//
//  Created by zhaitong on 2018/8/11.
//  Copyright © 2018年 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface rightList : NSObject
@property (nonatomic, strong) NSString *activeUrl;//URL
@property (nonatomic, strong) NSString *noRightImg;//置灰图片
@property (nonatomic, strong) NSString *rightId;//权益id
@property (nonatomic, strong) NSString *rightImg;//权益图片
@property (nonatomic, copy) NSString *homeIcon;//首页下拉权益icon
@property (nonatomic, strong) NSString *rightName;//权益名称
@property (nonatomic, strong) NSString *rightType;//权益类型
@end
@interface nextLevelData : NSObject
@property (nonatomic, strong) NSString *amountPer;//已消费百分比
@property (nonatomic, strong) NSString *consumeAmount;//需要消费金额
@property (nonatomic, strong) NSString *consumeCount;//需要消费次数
@property (nonatomic, strong) NSString *countPer;//次数百分比
@property (nonatomic, strong) NSString *nextLevel;//下一个等级
@property (nonatomic, strong) NSString *nextLevelName;//下一个等级名称
@end
@interface levelList: NSObject
@property (nonatomic, strong) NSString *isMyLevel;//是否当前等级
@property (nonatomic, strong) NSString *level;//等级
@property (nonatomic, strong) NSString * levelName;//等级名称
@property (nonatomic, strong) NSString *validDate;//有效期
@property (nonatomic, copy) NSArray *rightList;
@property (nonatomic, copy) nextLevelData *nextLevelData;
@end
@interface ResponseGetLevelList : NSObject
@property (nonatomic, copy) NSArray *levelList;
@end
