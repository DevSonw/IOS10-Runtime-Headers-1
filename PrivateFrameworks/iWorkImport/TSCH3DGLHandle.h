//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DResourceHandle.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGLHandle : TSCH3DResourceHandle
{
    unsigned int mValue;
}

+ (id)handleWithGLHandle:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int value; // @synthesize value=mValue;
- (void)setValue:(unsigned int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithGLHandle:(unsigned int)arg1;

@end
