//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (TSUAdditions)
- (id)tsu_displayName;
- (_Bool)tsu_isSharedWithMe;
- (_Bool)tsu_isShared;
- (unsigned long long)tsu_fileSize;
- (_Bool)tsu_isFileSizeTooLargeForSharing;
- (void)tsu_performSecurityScopedResourceAccessAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1;
- (void)tsu_performSecurityScopedResourceAccessUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_documentIdentifier;
@end

