//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableArray, NSString, PHFetchResult, PXMemoriesFeedDataSource;

@interface PXMemoriesFeedMomentsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHFetchResult *_momentsFetchResult;
    NSMutableArray *_entries;
}

- (void).cxx_destruct;
- (id)_randomMoment;
- (void)generateNewEntry;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) PXMemoriesFeedDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

