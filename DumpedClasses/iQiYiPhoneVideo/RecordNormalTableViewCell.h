//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RecordTableViewCell.h"

@class PlayRecord;

@interface RecordNormalTableViewCell : RecordTableViewCell
{
    PlayRecord *_record;
}

@property(retain, nonatomic) PlayRecord *record; // @synthesize record=_record;
- (void)selectOrDeselect:(_Bool)arg1;
- (_Bool)inverseSeletedStateOfDelete;
- (void)setupMeta;
- (void)setupTitle;
- (void)setupDuration;
- (void)setupIcon;
- (void)setupImageView;
- (void)adjustEdit;
- (void)dataChanged;
- (id)getHHMMSSByTime:(long long)arg1;
- (_Bool)isSelectedToDelete;
- (void)dealloc;
- (id)dataKeyPath;

@end

