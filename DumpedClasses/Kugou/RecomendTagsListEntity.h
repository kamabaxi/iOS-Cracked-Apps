//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface RecomendTagsListEntity : NSObject
{
    NSString *_typeName;
    NSMutableArray *_tags;
}

+ (id)getRecomendTagsListWithDic:(id)arg1;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void).cxx_destruct;

@end
