//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKitUI/NSCopying-Protocol.h>

@class NSArray;

@interface CalendarOccurrencesCollection : NSObject <NSCopying>
{
    NSArray *_occurrences;
    NSArray *_allDayOccurrences;
    NSArray *_timedOccurrences;
}

@property(readonly, nonatomic) NSArray *timedOccurrences; // @synthesize timedOccurrences=_timedOccurrences;
@property(readonly, nonatomic) NSArray *allDayOccurrences; // @synthesize allDayOccurrences=_allDayOccurrences;
@property(readonly, nonatomic) NSArray *occurrences; // @synthesize occurrences=_occurrences;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOccurrences:(id)arg1 timedOccurrences:(id)arg2 allDayOccurrences:(id)arg3;

@end

