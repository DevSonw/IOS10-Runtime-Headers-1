//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSURL;

__attribute__((visibility("hidden")))
@interface BRCRecentDocumentDescriptor : NSObject
{
    NSNumber *_documentID;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSNumber *documentID; // @synthesize documentID=_documentID;
- (void).cxx_destruct;
- (id)initWithDocumentID:(id)arg1 URL:(id)arg2;

@end
