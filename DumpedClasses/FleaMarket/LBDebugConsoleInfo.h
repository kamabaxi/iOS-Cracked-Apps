//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface LBDebugConsoleInfo : NSObject
{
    float diffValue;
    float freeValue;
    float usedValue;
    NSString *title;
    CDUnknownBlockType descriptionBlock;
    NSDictionary *userInfo;
}

+ (id)AddConsoleInfoWithTitle:(id)arg1 keyValue:(float)arg2 userInfo:(id)arg3 displayBlock:(CDUnknownBlockType)arg4;
+ (id)AddConsolInfoWithTitle:(id)arg1 usedValue:(float)arg2 diffValue:(float)arg3 freeValue:(float)arg4 displayBlock:(CDUnknownBlockType)arg5;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo;
@property(copy) CDUnknownBlockType descriptionBlock; // @synthesize descriptionBlock;
@property float usedValue; // @synthesize usedValue;
@property float freeValue; // @synthesize freeValue;
@property float diffValue; // @synthesize diffValue;
@property(retain) NSString *title; // @synthesize title;
- (void).cxx_destruct;
- (id)description;

@end
