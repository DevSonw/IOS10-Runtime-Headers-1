//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPRep.h>

@class NSSet, TPBodyLayout;

__attribute__((visibility("hidden")))
@interface TPBodyRep : TSWPRep
{
    NSSet *_lastSelectedInfos;
    TPBodyLayout *_bodyLayout;
}

@property(readonly, nonatomic) TPBodyLayout *bodyLayout; // @synthesize bodyLayout=_bodyLayout;
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)colorBehindLayer:(id)arg1;
- (id)storage;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end
