//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SGPatternDataFile : NSObject
{
    NSData *_fileData;
}

- (void).cxx_destruct;
- (id)dataForOffset:(id)arg1;
- (id)dataForOffset:(id)arg1 includeTerminator:(int)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end

