# SSDR4Maya
�{�R�[�h�́A�_��"Smooth Skinning Decomposition with Rigid Bones"��Maya2016�p�v���O�C�������̃T���v���ł��B

## ���s���@���g�p��
bin�t�H���_�ɂ���r���h�ς݃p�b�P�[�W�ꎮ���AMaya�̃v���O�C���p�X�iMAYA_PLUG_IN_PATH�j���ʂ��Ă���t�H���_�ɒu���܂��B

[![SSDR4Maya](http://img.youtube.com/vi/ZPKKR24gGbg/0.jpg)](http://www.youtube.com/watch?v=ZPKKR24gGbg)

## �r���h�Ǝ��s���@
�g�����C�u���� ssdr.pyd �� Visual Studio 2013 Professional �v���W�F�N�g�Ƃ��č쐬���Ă��܂��B�r���h�ɂ́A�O�����C�u�����Ƃ��� [Eigen](http://eigen.tuxfamily.org/ "Eigen")�A [QuadProg++](http://quadprog.sourceforge.net/ "QuadProg++")�A[Boost](http://www.boost.org/ "Boost") �A�����[Maya 2016.3 Developer Kit](https://apps.autodesk.com/MAYA/ja/Detail/Index?id=6303159649350432165&appLang=en&os=Win64 "MayaDevKit)���K�v�ł��B�Ȃ��A�r���h����ю��s�e�X�g�ɂ� Eigen 3.2.8�AQuadProg++ 1.2.1�A�����Boost 1.6.1 ��p���܂����B

�r���h�菇�͎��̒ʂ�ł��B

1. Eigen�̃C���X�g�[���t�H���_�ɃC���N���[�h�p�X��ʂ��B
2. Boost�̃C���X�g�[���t�H���_�ɃC���N���[�h�p�X��ʂ��B
3. //MAYA_LOCATION/include ����� //MAYA_LOCATION/include/python2.7 �t�H���_�ɃC���N���[�h�p�X��ʂ��B
4. QuadProg++���_�E�����[�h���A���L4�̃t�@�C����ssdr�t�H���_�ɃR�s�[����B
 * QuadProg++.hh
 * QuadProg++.cc
 * Array.hh
 * Array.cc
5. Visual Studio 2013��Ńr���h�����s

## �v�Z�p�����[�^�̒���
SSDR�̌v�Z�p�����[�^�́AmlSsdrBuilder.py���AssdrBuildCmd�N���X�̖`���ɂ܂Ƃ߂��Ă��܂��B
* numMaxInfluences�F �e���_������Ɋ��蓖�Ă���ő�{�[����
* numMinBones�F ���_�A�j���[�V�����ߎ��ɗp����ŏ��{�[����
* numMaxIterations�F �ő唽����

�����3�̃p�����[�^�̕ύX���邱�ƂŁA����ɂƂ��Ȃ��v�Z���ʂ̕ω����m�F�ł���Ǝv���܂��B����ł́A�ŏ��{�[�����ɑ傫�Ȓl��^����ƌv�Z���j�]���邱�Ƃ��m�F���Ă��܂��B

## �J�����e�X�g��
* Windows 10 Pro
* Maya 2016 SP6
* Visual Studio 2013 Update 5
* Maya 2016.3 Developer Kit
* Eigen 3.2.8
* QuadProg++ 1.2.1
* Boost 1.6.1

## �Q�l����

1. Binh Huy Le and Zhigang Deng, Smooth Skinning Decomposition with Rigid Bones, ACM Transactions on Graphics, 31 (6), (2012), 199:1-199:10.
2. Binh Huy Le and Zhigang Deng, Robust and Accurate Skeletal Rigging from Mesh Sequences, ACM Transactions on Graphics, 33 (4), (2014), 84:1-84:10.
3. ���� �q�F, �X�L�j���O����, Computer Graphics Gems JP 2015 7�́F�X�L�j���O�����i�{�[���f�W�^���j, 2015.

## �ύX����
1. 2016/07/06 ���Ō��J
