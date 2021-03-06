//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, SFSearchResult;

@interface WBSURLCompletionMatch : NSObject <WBSCompletionListItem>
{
    long long _matchLocation;
}

+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;
@property(readonly, nonatomic) long long matchLocation; // @synthesize matchLocation=_matchLocation;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;
@property(readonly, nonatomic, getter=isTopHit) _Bool topHit;
- (id)userVisibleURLString;
- (id)title;
- (id)originalURLString;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool matchLocationIsInURL;
- (id)initWithMatchLocation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(readonly) Class superclass;

@end

