//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSPlugInKitProxy, NSExtension, NSString;

@interface CXCallDirectoryExtension : NSObject
{
    NSExtension *_extension;
}

@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
@property(readonly, nonatomic) LSPlugInKitProxy *plugInKitProxy;
@property(readonly, nonatomic) NSString *localizedContainingAppName;
@property(readonly, nonatomic) NSString *localizedName;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (id)init;
- (id)initWithExtension:(id)arg1;

@end

