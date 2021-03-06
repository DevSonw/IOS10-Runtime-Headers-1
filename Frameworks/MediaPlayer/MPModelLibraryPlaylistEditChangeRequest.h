//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibrary, MPModelPlaylist, MPSectionedCollection, NSNumber, NSString, UIImage;

@interface MPModelLibraryPlaylistEditChangeRequest : NSObject <NSCopying>
{
    _Bool _shouldCreatePlaylist;
    _Bool _didSetPlaylistUserImage;
    MPMediaLibrary *_mediaLibrary;
    MPSectionedCollection *_playlistEntries;
    NSString *_playlistDescription;
    NSString *_playlistName;
    UIImage *_playlistUserImage;
    NSNumber *_publicPlaylist;
    MPModelPlaylist *_parentPlaylist;
    MPModelPlaylist *_playlist;
}

+ (id)requiredPlaylistEntryProperties;
@property(readonly, nonatomic) _Bool didSetPlaylistUserImage; // @synthesize didSetPlaylistUserImage=_didSetPlaylistUserImage;
@property(retain, nonatomic) MPModelPlaylist *playlist; // @synthesize playlist=_playlist;
@property(nonatomic) _Bool shouldCreatePlaylist; // @synthesize shouldCreatePlaylist=_shouldCreatePlaylist;
@property(retain, nonatomic) MPModelPlaylist *parentPlaylist; // @synthesize parentPlaylist=_parentPlaylist;
@property(copy, nonatomic, getter=isPublicPlaylist) NSNumber *publicPlaylist; // @synthesize publicPlaylist=_publicPlaylist;
@property(retain, nonatomic) UIImage *playlistUserImage; // @synthesize playlistUserImage=_playlistUserImage;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(copy, nonatomic) NSString *playlistDescription; // @synthesize playlistDescription=_playlistDescription;
@property(copy, nonatomic) MPSectionedCollection *playlistEntries; // @synthesize playlistEntries=_playlistEntries;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (id)newOperationWithLocalPersistenceResponseHandler:(CDUnknownBlockType)arg1 completeResponseHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

