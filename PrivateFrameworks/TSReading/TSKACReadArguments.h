//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSKACReadArguments : NSObject
{
    SEL _selector;
    id _target;
    void *_argument;
    id _argument2;
}

@property(readonly, nonatomic) id argument2; // @synthesize argument2=_argument2;
@property(readonly, nonatomic) void *argument; // @synthesize argument=_argument;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3 argument2:(id)arg4;
- (id)initWithSelector:(SEL)arg1 target:(id)arg2 argument:(void *)arg3;

@end
