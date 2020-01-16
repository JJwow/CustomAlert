//
//  RequestGetVoiceList.h
//  CarBaDa
//
//  Created by mini on 2019/7/11.
//  Copyright © 2019 wyj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCTRequestObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface RequestGetVoiceList : TCTRequestObject

@property (nonatomic, strong) NSString *memberId;
@property (nonatomic, strong) NSString *voiceResource; //0 曹操滴滴等品牌；1 首汽

@end

NS_ASSUME_NONNULL_END
