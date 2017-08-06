//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary<Optional>, NSNumber, NSString;

@interface TTAppLogResponseModel : JSONModel
{
    NSString *_magicTag;
    NSString *_message;
    NSNumber *_serverTime;
    NSDictionary<Optional> *_blackList;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSDictionary<Optional> *blackList; // @synthesize blackList=_blackList;
@property(retain, nonatomic) NSNumber *serverTime; // @synthesize serverTime=_serverTime;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *magicTag; // @synthesize magicTag=_magicTag;
- (void).cxx_destruct;

@end
