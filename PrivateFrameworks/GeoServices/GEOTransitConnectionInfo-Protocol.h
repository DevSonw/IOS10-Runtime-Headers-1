//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol GEOTransitConnectionInfo <NSObject>
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@end

