//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseModel.h"

@class NSString, NSURL;

@interface _TtC7Lingome11RemindTutor : BaseModel
{
    // Error parsing type: , name: resourceId
    // Error parsing type: , name: nick
    // Error parsing type: , name: intro
    // Error parsing type: , name: pushText
    // Error parsing type: , name: avatarUrl
    // Error parsing type: , name: fromLocal
    // Error parsing type: , name: startText
    // Error parsing type: , name: startAudioURL
    // Error parsing type: , name: startAudioLength
    // Error parsing type: , name: finishedText
    // Error parsing type: , name: finishedAudioURL
    // Error parsing type: , name: finishedAudioLength
    // Error parsing type: , name: coverURL
}

+ (id)local3;
+ (id)local2;
+ (id)local1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic) _Bool fromLocal; // @synthesize fromLocal;
@property(nonatomic, retain) NSURL *avatarUrl; // @synthesize avatarUrl;
@property(nonatomic, copy) NSString *pushText; // @synthesize pushText;
@property(nonatomic, copy) NSString *intro; // @synthesize intro;
@property(nonatomic, copy) NSString *nick; // @synthesize nick;
@property(nonatomic, copy) NSString *resourceId; // @synthesize resourceId;

@end

