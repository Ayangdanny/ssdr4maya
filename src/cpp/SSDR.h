#pragma once

#include <vector>
#include <DirectXMath.h>
#include "RigidTransform.h"

namespace SSDR
{
    // ���̓f�[�^�\����
    struct Input
    {
        //! ���_��
        int numVertices;
        //! �Ꭶ�f�[�^��
        int numExamples;
        //! �o�C���h���_���W�i���_���j
        std::vector<DirectX::XMFLOAT3A> bindModel;
        //! �Ꭶ�`�󒸓_���W (�Ꭶ�f�[�^�� x ���_���j
        std::vector<DirectX::XMFLOAT3A> sample;

        Input() : numVertices(0), numExamples(0) {}
        ~Input() {}
    };

    // �o�̓f�[�^�\����
    struct Output
    {
        //! �{�[����
        int numBones;
        //! �X�L�j���O�E�F�C�g�i���_�� x �C���f�N�X���j
        std::vector<double> weight;
        //! �C���f�N�X�i���_�� x �C���f�N�X���j
        std::vector<int> index;
        //! �X�L�j���O�s��i�Ꭶ�f�[�^�� x �����j
        std::vector<RigidTransform> boneTrans;
    };

    // �v�Z�p�����[�^�\����
    struct Parameter
    {
        //! �ŏ��{�[����
        int numMinBones;
        //! ���_���Ƀo�C���h�����ő�{�[����
        int numMaxInfluences;
        //! �ő唽����
        int numMaxIterations;
    };

    extern double Decompose(Output& output, const Input& input, const Parameter& param);
    extern double ComputeApproximationErrorSq(const Output& output, const Input& input, const Parameter& param);
}
