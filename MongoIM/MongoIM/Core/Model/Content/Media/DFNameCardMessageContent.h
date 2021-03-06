//
//  DFNameCardMessageContent.h
//  MongoIM
//
//  Created by Allen Zhong on 16/2/13.
//  Copyright © 2016年 MongoIM. All rights reserved.
//

#import "DFMediaMessageContent.h"

@interface DFNameCardMessageContent : DFMediaMessageContent

@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *userNick;
@property (nonatomic, strong) NSString *userNum;
@property (nonatomic, strong) NSString *userAvatar;

@end
