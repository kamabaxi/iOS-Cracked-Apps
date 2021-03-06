//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemSearchCombinedResultsEdge, NSArray;

@interface FBSearchResultsPictureBoardModel : FBValueObject <NSCopying>
{
    FBMemSearchCombinedResultsEdge *_featuredPhotoEdge;
    NSArray *_relatedPhotosEdges;
    long long _status;
}

@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSArray *relatedPhotosEdges; // @synthesize relatedPhotosEdges=_relatedPhotosEdges;
@property(readonly, copy, nonatomic) FBMemSearchCombinedResultsEdge *featuredPhotoEdge; // @synthesize featuredPhotoEdge=_featuredPhotoEdge;
- (void).cxx_destruct;
- (id)initWithFeaturedPhotoEdge:(id)arg1 relatedPhotosEdges:(id)arg2 status:(long long)arg3;

@end

