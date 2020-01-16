//
//  ResponseGetMessageList.h
//  CarBaDa
//
//  Created by admin on 16/8/10.
//  Copyright © 2016年 wyj. All rights reserved.
//

#import "TCTResponseObject.h"
#import "PageInfo.h"

@interface ResponseGetMessageList : TCTResponseObject

@property(nonatomic,strong)NSMutableArray* messageList;
@property (nonatomic,strong) pageInfo *pageInfo;

@end

@interface custom : NSObject

//@property(nonatomic,strong)NSString* ac;
//@property(nonatomic,strong)NSString* ph;
//@property(nonatomic,strong)NSDictionary* vl;
//@property(nonatomic,strong)NSString* ed;
@property(nonatomic,copy)NSString *picUrl;

@end

@interface messageList : NSObject

@property(nonatomic,strong)NSString* messageId;
@property(nonatomic,strong)NSString* title;
@property(nonatomic,strong)NSString* content;
@property(nonatomic,strong)custom* custom;
@property(nonatomic,strong)NSString* createTime;
@property(nonatomic,strong)NSString* expirationTime;
@property(nonatomic,copy)NSString *image;
@end
