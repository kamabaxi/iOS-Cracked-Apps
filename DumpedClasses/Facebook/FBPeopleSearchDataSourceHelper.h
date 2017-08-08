//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBFriendingStatefulWriteInterface;

@interface FBPeopleSearchDataSourceHelper : NSObject
{
    FBFriendingStatefulWriteInterface *_statefulWriteInterface;
}

@property(readonly, nonatomic) FBFriendingStatefulWriteInterface *statefulWriteInterface; // @synthesize statefulWriteInterface=_statefulWriteInterface;
- (void).cxx_destruct;
- (void)updateSearchResult:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)clearPreviousSearchResults;
- (id)resultAtIndex:(long long)arg1;
- (void)insertSearchResults:(id)arg1;
- (void)_insertSectionIfNecessaryWithChangesetSections:(struct Sections *)arg1;
- (id)initWithStatefulWriteInterface:(id)arg1;

@end
