//
//  Requestgettrainstations.h
//  CarBaDa
//
//  Created by 丁健 on 15/11/20.
//  Copyright © 2015年 wyj. All rights reserved.
//

#import "TCTRequestObject.h"

@interface RequestGetTrainStations : TCTRequestObject
//车站列表
@property (nonatomic,copy) NSString *versionnum;//待删除
@property (nonatomic,copy) NSString *lastModifyTime;//更新时间戳		~262
@end
