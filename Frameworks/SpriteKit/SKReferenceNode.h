//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

@class NSString, NSURL;

@interface SKReferenceNode : SKNode
{
    NSURL *_referenceURL;
    NSString *_referenceFileName;
    SKNode *_resolvedNode;
    _Bool _hasResolvedURL;
}

+ (id)referenceNodeWithFileNamed:(id)arg1;
+ (id)referenceNodeWithURL:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resolvedNode;
- (void)didLoadReferenceNode:(id)arg1;
- (void)resolveReferenceNode;
- (id)_resolveReferenceNode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSURL *referenceURL;
@property(retain, nonatomic) NSString *referenceFileName;
- (id)initWithFileNamed:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
