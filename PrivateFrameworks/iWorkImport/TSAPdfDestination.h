//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSAPdfDestination : NSObject
{
    NSString *_name;
    struct CGPoint _point;
}

+ (id)pdfDestinationWithName:(id)arg1 point:(struct CGPoint)arg2;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 point:(struct CGPoint)arg2;

@end

